
模板匹配
========
说明：R表示结果图像，T表示模板图像，I表示输入图像，x,y表示在输入图像中的坐标，x',y'表示在输入图像中的坐标

- 平方差匹配法CV_TM_SQDIFF

.. math::
    R(x,y)=\sum_{x',y'}[T(x',y')-I(x+x',y+y')]^2

- 归一化平方差匹配法CV_TM_SQDIFF_NORMED

.. math::
    R(x,y)=\frac{\sum_{x',y'}[T(x',y')-I(x+x',y+y')]^2}{\sqrt{\sum_{x',y'}T(x',y')^2}\sqrt{\sum_{x',y'}I(x+x',y+y')^2}}

- 相关匹配法CV_TM_CCORR

.. math::
    coming

- 归一化相关匹配法CV_TM_CCORR_NORMED

.. math::
    coming

- 相关系数匹配法CV_TM_CCOEFF

.. math::
    coming

- 归一化相关系数匹配法CV_TM_CCOEFF_NORMED

.. math::
    coming


