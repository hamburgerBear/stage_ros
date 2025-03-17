# Desc : room_chair_models
# Authors : Gao jie
# Date : 2025.01.01

define modelBase model
(
  # 修改前
  # obstacle_return 1
  # laser_return 1
  # ranger_return 1

  # 修改后
  color "gray30"

  # most maps will need a bounding box
  boundary 1

  #gui_nose 0
  #gui_grid 0
  #gui_move 0
  #gui_outline 0
  #gripper_return 0
  #fiducial_return 0
  ranger_return 0.5

  obstacle_return 0
)

# 圆形底座 直径20cm
define chairBase1 modelBase (
  # These corresponds to the maximum x y and z of the table in meters.
  size [0.2 0.2 0.3]
  color "gray"
  block(
  points 32 
  point[0] [0.10  0.00]
  point[1] [0.098  0.0195]
  point[2] [0.0924  0.0383]
  point[3] [0.0831  0.0556]
  point[4] [0.0711  0.0711]
  point[5] [0.0556  0.0831]
  point[6] [0.0383  0.0924]
  point[7] [0.0195  0.098]
  point[8] [0.00  0.10]
  point[9] [-0.0195  0.098]
  point[10] [-0.0383  0.0924]
  point[11] [-0.0556  0.0831]
  point[12] [-0.0711  0.0711]
  point[13] [-0.0831  0.0556]
  point[14] [-0.0924  0.0383]
  point[15] [-0.098  0.0195]
  point[16] [-0.10  0.00]
  point[17] [-0.098  -0.0195]
  point[18] [-0.0924  -0.0383]
  point[19] [-0.0831  -0.0556]
  point[20] [-0.0711  -0.0711]
  point[21] [-0.0556  -0.0831]
  point[22] [-0.0383  -0.0924]
  point[23] [-0.0195  -0.098]
  point[24] [-0.00  -0.10]
  point[25] [0.0195  -0.098]
  point[26] [0.0383  -0.0924]
  point[27] [0.0556  -0.0831]
  point[28] [0.0711  -0.0711]
  point[29] [0.0831  -0.0556]
  point[30] [0.0924  -0.0383]
  point[31] [0.098  -0.0195]
  z [ 0.0 0.3 ]
  )
)

# 圆形低矮底座 外圈直径30cm 内圈直径20cm
define chairBase2 modelBase (
  # These corresponds to the maximum x y and z of the table in meters.
  size [0.3 0.3 0.3]
  color "gray"
  block(
  points 32 
  point[0] [0.15  0.00]
  point[1] [0.147  0.02925]
  point[2] [0.1386  0.05745]
  point[3] [0.12465  0.0834]
  point[4] [0.10665  0.10665]
  point[5] [0.0834  0.12465]
  point[6] [0.05745  0.1386]
  point[7] [0.02925  0.147]
  point[8] [0.00  0.15]
  point[9] [-0.02925  0.147]
  point[10] [-0.05745  0.1386]
  point[11] [-0.0834  0.12465]
  point[12] [-0.10665  0.10665]
  point[13] [-0.12465  0.0834]
  point[14] [-0.1386  0.05745]
  point[15] [-0.147  0.02925]
  point[16] [-0.15  0.00]
  point[17] [-0.147  -0.02925]
  point[18] [-0.1386  -0.05745]
  point[19] [-0.12465  -0.0834]
  point[20] [-0.10665  -0.10665]
  point[21] [-0.0834  -0.12465]
  point[22] [-0.05745  -0.1386]
  point[23] [-0.02925  -0.147]
  point[24] [-0.00  -0.15]
  point[25] [0.02925  -0.147]
  point[26] [0.05745  -0.1386]
  point[27] [0.0834  -0.12465]
  point[28] [0.10665  -0.10665]
  point[29] [0.12465  -0.0834]
  point[30] [0.1386  -0.05745]
  point[31] [0.147  -0.02925]
  z [ 0.0 0.05 ]
  )

  block(
  points 32 
  point[0] [0.10  0.00]
  point[1] [0.098  0.0195]
  point[2] [0.0924  0.0383]
  point[3] [0.0831  0.0556]
  point[4] [0.0711  0.0711]
  point[5] [0.0556  0.0831]
  point[6] [0.0383  0.0924]
  point[7] [0.0195  0.098]
  point[8] [0.00  0.10]
  point[9] [-0.0195  0.098]
  point[10] [-0.0383  0.0924]
  point[11] [-0.0556  0.0831]
  point[12] [-0.0711  0.0711]
  point[13] [-0.0831  0.0556]
  point[14] [-0.0924  0.0383]
  point[15] [-0.098  0.0195]
  point[16] [-0.10  0.00]
  point[17] [-0.098  -0.0195]
  point[18] [-0.0924  -0.0383]
  point[19] [-0.0831  -0.0556]
  point[20] [-0.0711  -0.0711]
  point[21] [-0.0556  -0.0831]
  point[22] [-0.0383  -0.0924]
  point[23] [-0.0195  -0.098]
  point[24] [-0.00  -0.10]
  point[25] [0.0195  -0.098]
  point[26] [0.0383  -0.0924]
  point[27] [0.0556  -0.0831]
  point[28] [0.0711  -0.0711]
  point[29] [0.0831  -0.0556]
  point[30] [0.0924  -0.0383]
  point[31] [0.098  -0.0195]
  z [ 0.05 0.3 ]
  )
)

# 方形低矮底座 长度50cm 宽度30cm 内圈直径20cm
define chairBase3 modelBase (
  # These corresponds to the maximum x y and z of the table in meters.
  size [0.4 0.3 0.3]
  color "gray"
  block(
  points 4 
  point[0] [-0.15 0.15 0.00]
  point[1] [-0.15 -0.15 0.00]
  point[2] [0.25 -0.15 0.00]
  point[3] [0.25 0.15 0.00]
  z [ 0.0 0.05 ]
  )

  block(
  points 32 
  point[0] [0.10  0.00]
  point[1] [0.098  0.0195]
  point[2] [0.0924  0.0383]
  point[3] [0.0831  0.0556]
  point[4] [0.0711  0.0711]
  point[5] [0.0556  0.0831]
  point[6] [0.0383  0.0924]
  point[7] [0.0195  0.098]
  point[8] [0.00  0.10]
  point[9] [-0.0195  0.098]
  point[10] [-0.0383  0.0924]
  point[11] [-0.0556  0.0831]
  point[12] [-0.0711  0.0711]
  point[13] [-0.0831  0.0556]
  point[14] [-0.0924  0.0383]
  point[15] [-0.098  0.0195]
  point[16] [-0.10  0.00]
  point[17] [-0.098  -0.0195]
  point[18] [-0.0924  -0.0383]
  point[19] [-0.0831  -0.0556]
  point[20] [-0.0711  -0.0711]
  point[21] [-0.0556  -0.0831]
  point[22] [-0.0383  -0.0924]
  point[23] [-0.0195  -0.098]
  point[24] [-0.00  -0.10]
  point[25] [0.0195  -0.098]
  point[26] [0.0383  -0.0924]
  point[27] [0.0556  -0.0831]
  point[28] [0.0711  -0.0711]
  point[29] [0.0831  -0.0556]
  point[30] [0.0924  -0.0383]
  point[31] [0.098  -0.0195]
  z [ 0.05 0.3 ]
  )
)

define chair1 modelBase
(
  # These corresponds to the maximum x y and z of the chair1 in meters.
  size [0.450 0.450 0.870]

  # Back support of the chair
  block (
  points 4
  point[3] [  1.000  -1.000 ] 
  point[2] [ -1.000  -1.000 ] 
  point[1] [ -1.000   -0.867 ] 
  point[0] [  1.000   -0.867 ] 
  z [ 0.483 1.000 ]
      )
  # Seat of the chair
  block (
  points 4
  point[3] [  1.000  -1.000 ] 
  point[2] [ -1.000  -1.000 ] 
  point[1] [ -1.000   1.000 ] 
  point[0] [  1.000   1.000 ] 
  z [ 0.483 0.517 ]
      )
  # Lower stand of the chair
  block (
  points 4
  point[3] [  1.000  -1.000 ] 
  point[2] [ -1.000  -1.000 ] 
  point[1] [ -1.000   1.000 ] 
  point[0] [  1.000   1.000 ] 
  z [ 0.0 0.034 ]
      )
  # Middle stick of the chair
  block (
  points 4
  point[3] [  0.100  -0.100 ] 
  point[2] [ -0.100  -0.100 ] 
  point[1] [ -0.100   0.100 ] 
  point[0] [  0.100   0.100 ] 
  z [ 0.0 0.483 ]
      )
)

define chair2 modelBase
(
  # These corresponds to the maximum x y and z of the chair1 in meters.
  size [0.450 0.450 0.870]

  # Back support of the chair
  block (
  points 4
  point[3] [  1.000  -1.000 ] 
  point[2] [ -1.000  -1.000 ] 
  point[1] [ -1.000   -0.867 ] 
  point[0] [  1.000   -0.867 ] 
  z [ 0.483 1.000 ]
      )
  # Seat of the chair
  block (
  points 4
  point[3] [  1.000  -1.000 ] 
  point[2] [ -1.000  -1.000 ] 
  point[1] [ -1.000   1.000 ] 
  point[0] [  1.000   1.000 ] 
  z [ 0.483 0.517 ]
      )
  # Lower stand of the chair - right
  block (
  points 4
  point[3] [  1.000  -1.000 ] 
  point[2] [  0.867  -1.000 ] 
  point[1] [  0.867   1.000 ] 
  point[0] [  1.000   1.000 ] 
  z [ 0.0 0.034 ]
      )
  # Right front leg
  block (
  points 4
  point[3] [  1.000   -1.000 ] 
  point[2] [  0.867   -1.000 ] 
  point[1] [  0.867   -0.867 ] 
  point[0] [  1.000   -0.867 ] 
  z [ 0.0 0.483 ]
      )
  # Right back leg
  block (
  points 4
  point[3] [  1.000   0.867 ] 
  point[2] [  0.867   0.867 ] 
  point[1] [  0.867   1.000 ] 
  point[0] [  1.000   1.000 ] 
  z [ 0.0 0.483 ]
      )
  # Left front leg
  block (
  points 4
  point[3] [  -0.867   -1.000 ] 
  point[2] [  -1.000   -1.000 ] 
  point[1] [  -1.000   -0.867 ] 
  point[0] [  -0.867   -0.867 ] 
  z [ 0.0 0.483 ]
      )
  # Left back leg
  block (
  points 4
  point[3] [  -0.867   0.867 ] 
  point[2] [  -1.000   0.867 ] 
  point[1] [  -1.000   1.000 ] 
  point[0] [  -0.867   1.000 ] 
  z [ 0.0 0.483 ]
      )
  # Lower stand of the chair - left
  block (
  points 4
  point[3] [  -0.867  -1.000 ] 
  point[2] [  -1.000  -1.000 ] 
  point[1] [  -1.000   1.000 ] 
  point[0] [  -0.867   1.000 ] 
  z [ 0.0 0.034 ]
      )
)

define chair3 modelBase
(
  # These corresponds to the maximum x y and z of the chair1 in meters.
  size [0.5 0.42 0.8]

  # Back support of the chair
  # block (
  # points 4
  # point[3] [  1.000  -1.000 ] 
  # point[2] [ -1.000  -1.000 ] 
  # point[1] [ -1.000   -0.84 ] 
  # point[0] [  1.000   -0.84 ] 
  # z [ 0.483 0.8 ]
  #     )
  # # Seat of the chair
  # block (
  # points 4
  # point[3] [  1.000  -1.000 ] 
  # point[2] [ -1.000  -1.000 ] 
  # point[1] [ -1.000   1.000 ] 
  # point[0] [  1.000   1.000 ] 
  # z [ 0.483 0.517 ]
  #     )
  # # Lower stand of the chair - right
  # block (
  # points 4
  # point[3] [  1.000  -1.000 ] 
  # point[2] [  0.84  -1.000 ] 
  # point[1] [  0.84   1.000 ] 
  # point[0] [  1.000   1.000 ] 
  # z [ 0.3 0.34 ]
  #     )
  # Right front leg
  block (
  points 4
  point[3] [  1.000   -1.000 ] 
  point[2] [  0.84   -1.000 ] 
  point[1] [  0.84   -0.84 ] 
  point[0] [  1.000   -0.84 ] 
  z [ 0.0 0.483 ]
      )
  # Right back leg
  block (
  points 4
  point[3] [  1.000   0.84 ] 
  point[2] [  0.84   0.84 ] 
  point[1] [  0.84   1.000 ] 
  point[0] [  1.000   1.000 ] 
  z [ 0.0 0.483 ]
      )
  # Left front leg
  block (
  points 4
  point[3] [  -0.84   -1.000 ] 
  point[2] [  -1.000   -1.000 ] 
  point[1] [  -1.000   -0.84 ] 
  point[0] [  -0.84   -0.84 ] 
  z [ 0.0 0.483 ]
      )
  # Left back leg
  block (
  points 4
  point[3] [  -0.84   0.84 ] 
  point[2] [  -1.000   0.84 ] 
  point[1] [  -1.000   1.000 ] 
  point[0] [  -0.84   1.000 ] 
  z [ 0.0 0.483 ]
      )
  # Lower stand of the chair - left
  # block (
  # points 4
  # point[3] [  -0.84  -1.000 ] 
  # point[2] [  -1.000  -1.000 ] 
  # point[1] [  -1.000   1.000 ] 
  # point[0] [  -0.84   1.000 ] 
  # z [ 0.3 0.34 ]
  #     )
)