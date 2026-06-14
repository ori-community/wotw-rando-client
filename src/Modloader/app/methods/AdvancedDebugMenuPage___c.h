#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AdvancedDebugMenuPage_c.h>
#include <Modloader/app/structs/CacheData.h>
#include <Modloader/app/structs/KeyValuePair_2_Moon_UberID_System_Boolean_.h>
#include <Modloader/app/structs/KeyValuePair_2_Moon_UberID_System_Byte_.h>
#include <Modloader/app/structs/KeyValuePair_2_Moon_UberID_System_Int32_.h>
#include <Modloader/app/structs/KeyValuePair_2_Moon_UberID_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_Moon_UberID_System_Single_.h>
#include <Modloader/app/structs/ResoucesUnloadingMode__Enum.h>
#include <Modloader/app/structs/UberStateValueGroup.h>

namespace app::classes::AdvancedDebugMenuPage___c {
    IL2CPP_REGISTER_METHOD(0x004E5A40, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E5B80, bool, _GetItems_b__15_0, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E5CD0, void, _GetItems_b__15_1, app::AdvancedDebugMenuPage_c* this_ptr, bool v)
    IL2CPP_REGISTER_METHOD(0x004E5D70, bool, _GetItems_b__15_2, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E5E10, void, _GetItems_b__15_3, app::AdvancedDebugMenuPage_c* this_ptr, bool v)
    IL2CPP_REGISTER_METHOD(0x004E5EC0, bool, _GetItems_b__15_4, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E5F60, bool, _GetItems_b__15_5, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E6000, bool, _GetItems_b__15_6, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E60A0, void, _GetItems_b__15_7, app::AdvancedDebugMenuPage_c* this_ptr, bool v)
    IL2CPP_REGISTER_METHOD(0x004E6150, bool, _GetItems_b__15_8, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E61F0, void, _GetItems_b__15_9, app::AdvancedDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004E62A0, bool, _GetItems_b__15_10, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E6340, void, _GetItems_b__15_11, app::AdvancedDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004E63F0, bool, _GetItems_b__15_12, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E6490, void, _GetItems_b__15_13, app::AdvancedDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004E6540, bool, _GetItems_b__15_14, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E65E0, void, _GetItems_b__15_15, app::AdvancedDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004E6690, bool, _GetItems_b__15_16, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E6730, void, _GetItems_b__15_17, app::AdvancedDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004E67E0, bool, _GetItems_b__15_18, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E6880, void, _GetItems_b__15_19, app::AdvancedDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004E6930, bool, _GetItems_b__15_20, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E69D0, void, _GetItems_b__15_21, app::AdvancedDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004E6A80, bool, _GetItems_b__15_22, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E6B20, void, _GetItems_b__15_23, app::AdvancedDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004E6BD0, bool, _GetItems_b__15_24, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E6C70, void, _GetItems_b__15_25, app::AdvancedDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004E6D20, float, _GetItems_b__15_26, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E6DD0, void, _GetItems_b__15_27, app::AdvancedDebugMenuPage_c* this_ptr, float val)
    IL2CPP_REGISTER_METHOD(0x004E6E90, int32_t, _GetItems_b__15_28, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E6F30, void, _GetItems_b__15_29, app::AdvancedDebugMenuPage_c* this_ptr, int32_t val)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, _GetItems_b__15_31, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E6FE0, bool, _GetItems_b__15_36, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E7090, void, _GetItems_b__15_37, app::AdvancedDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x004E7140, bool, _GetItems_b__15_38, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E71F0, void, _GetItems_b__15_39, app::AdvancedDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x004E72A0, bool, _GetItems_b__15_40, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E7350, bool, _GetItems_b__15_41, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E73F0, void, _GetItems_b__15_42, app::AdvancedDebugMenuPage_c* this_ptr, bool v)
    IL2CPP_REGISTER_METHOD(0x004E74A0, bool, _GetItems_b__15_43, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E7540, void, _GetItems_b__15_44, app::AdvancedDebugMenuPage_c* this_ptr, bool v)
    IL2CPP_REGISTER_METHOD(0x004E75F0, bool, _GetItems_b__15_45, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E7690, void, _GetItems_b__15_46, app::AdvancedDebugMenuPage_c* this_ptr, bool v)
    IL2CPP_REGISTER_METHOD(0x004E7740, bool, _GetItems_b__15_47, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E7E20, bool, _GetItems_b__15_48, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E7F00, bool, _GetItems_b__15_49, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E7FB0, void, _GetItems_b__15_50, app::AdvancedDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004E8130, bool, _GetItems_b__15_55, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E81D0, void, _GetItems_b__15_56, app::AdvancedDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x004E8280, bool, _GetItems_b__15_57, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E83A0, bool, _GetItems_b__15_58, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E8440, void, _GetItems_b__15_59, app::AdvancedDebugMenuPage_c* this_ptr, bool v)
    IL2CPP_REGISTER_METHOD(0x004E84F0, bool, _GetItems_b__15_60, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E8590, void, _GetItems_b__15_61, app::AdvancedDebugMenuPage_c* this_ptr, bool v)
    IL2CPP_REGISTER_METHOD(0x004E8640, bool, _GetItems_b__15_62, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E86E0, void, _GetItems_b__15_63, app::AdvancedDebugMenuPage_c* this_ptr, bool v)
    IL2CPP_REGISTER_METHOD(0x004E8790, bool, _GetItems_b__15_64, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E8830, void, _GetItems_b__15_65, app::AdvancedDebugMenuPage_c* this_ptr, bool v)
    IL2CPP_REGISTER_METHOD(0x004E88E0, bool, _GetItems_b__15_68, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E8980, void, _GetItems_b__15_69, app::AdvancedDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004E8A30, bool, _GetItems_b__15_70, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E8AE0, void, _GetItems_b__15_71, app::AdvancedDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x004E8BA0, bool, _GetItems_b__15_72, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E8C30, void, _GetItems_b__15_73, app::AdvancedDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004E8D60, bool, _GetItems_b__15_74, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E8DF0, void, _GetItems_b__15_75, app::AdvancedDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004E8F20, bool, _GetItems_b__15_76, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E9040, void, _GetItems_b__15_77, app::AdvancedDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004E9170, bool, _GetItems_b__15_78, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E9210, void, _GetItems_b__15_79, app::AdvancedDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004E92C0, bool, _GetItems_b__15_80, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E93E0, void, _GetItems_b__15_81, app::AdvancedDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004E9510, bool, _GetItems_b__15_82, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E95B0, void, _GetItems_b__15_83, app::AdvancedDebugMenuPage_c* this_ptr, bool v)
    IL2CPP_REGISTER_METHOD(0x004E9660, bool, _GetItems_b__15_84, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E9700, void, _GetItems_b__15_85, app::AdvancedDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004E97B0, bool, _GetItems_b__15_86, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E9830, void, _GetItems_b__15_87, app::AdvancedDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004E98B0, bool, _GetItems_b__15_88, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E99D0, app::ResoucesUnloadingMode__Enum, _GetItems_b__15_89, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E9A60, void, _GetItems_b__15_90, app::AdvancedDebugMenuPage_c* this_ptr, app::ResoucesUnloadingMode__Enum val)
    IL2CPP_REGISTER_METHOD(0x004E9B00, bool, _GetItems_b__15_91, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E9BA0, void, _GetItems_b__15_92, app::AdvancedDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004E9C50, bool, _GetItems_b__15_93, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E9D00, void, _GetItems_b__15_94, app::AdvancedDebugMenuPage_c* this_ptr, bool v)
    IL2CPP_REGISTER_METHOD(0x004E9DC0, bool, _GetItems_b__15_95, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E9E60, void, _GetItems_b__15_96, app::AdvancedDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x004E9F10, bool, _GetItems_b__15_97, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E9FB0, void, _GetItems_b__15_98, app::AdvancedDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x004EA060, bool, _GetItems_b__15_99, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EA100, void, _GetItems_b__15_100, app::AdvancedDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004EA1B0, bool, _GetItems_b__15_101, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EA250, void, _GetItems_b__15_102, app::AdvancedDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004EA300, bool, _GetItems_b__15_103, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EA3A0, void, _GetItems_b__15_104, app::AdvancedDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004EA450, bool, _GetItems_b__15_105, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EA4F0, void, _GetItems_b__15_106, app::AdvancedDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004EA5A0, bool, _GetItems_b__15_107, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EA640, void, _GetItems_b__15_108, app::AdvancedDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004EA6F0, bool, _GetItems_b__15_109, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EA790, void, _GetItems_b__15_110, app::AdvancedDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004EA840, bool, _GetItems_b__15_111, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EA8E0, void, _GetItems_b__15_112, app::AdvancedDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004EA990, bool, _GetItems_b__15_113, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EAA70, bool, _GetItems_b__15_114, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EAC00, int32_t, _GetItems_b__15_115, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EACB0, void, _GetItems_b__15_116, app::AdvancedDebugMenuPage_c* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x004EAD70, int32_t, _GetItems_b__15_117, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EAE20, void, _GetItems_b__15_118, app::AdvancedDebugMenuPage_c* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x004EAEE0, int32_t, _GetItems_b__15_119, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EAF90, void, _GetItems_b__15_120, app::AdvancedDebugMenuPage_c* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x004EB050, bool, _GetItems_b__15_121, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EB100, bool, _GetItems_b__15_122, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EB1F0, bool, _GetItems_b__15_123, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EB2F0, bool, _GetItems_b__15_124, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EB390, void, _GetItems_b__15_125, app::AdvancedDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004EB440, bool, _GetItems_b__15_126, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EB4E0, void, _GetItems_b__15_127, app::AdvancedDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004EB590, bool, _GetItems_b__15_128, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EB630, void, _GetItems_b__15_129, app::AdvancedDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004EB6E0, bool, _GetItems_b__15_130, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EB780, void, _GetItems_b__15_131, app::AdvancedDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004EB830, float, _GetItems_b__15_132, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EB8D0, void, _GetItems_b__15_133, app::AdvancedDebugMenuPage_c* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x004EB980, float, _GetItems_b__15_134, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EBA20, void, _GetItems_b__15_135, app::AdvancedDebugMenuPage_c* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x004EBAD0, float, _GetItems_b__15_136, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EBB70, void, _GetItems_b__15_137, app::AdvancedDebugMenuPage_c* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x004EBC20, float, _GetItems_b__15_138, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EBCC0, void, _GetItems_b__15_139, app::AdvancedDebugMenuPage_c* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x004EBD70, float, _GetItems_b__15_140, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EBE10, void, _GetItems_b__15_141, app::AdvancedDebugMenuPage_c* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x004EBEC0, float, _GetItems_b__15_142, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EBF60, void, _GetItems_b__15_143, app::AdvancedDebugMenuPage_c* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x004EC010, float, _GetItems_b__15_144, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EC0B0, void, _GetItems_b__15_145, app::AdvancedDebugMenuPage_c* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x004EC160, float, _GetItems_b__15_146, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EC200, void, _GetItems_b__15_147, app::AdvancedDebugMenuPage_c* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x004EC2B0, float, _GetItems_b__15_148, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EC350, void, _GetItems_b__15_149, app::AdvancedDebugMenuPage_c* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x004EC400, float, _GetItems_b__15_150, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EC4A0, void, _GetItems_b__15_151, app::AdvancedDebugMenuPage_c* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x004EC550, bool, _GetItems_b__15_152, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EC5F0, void, _GetItems_b__15_153, app::AdvancedDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004EC6A0, float, _GetItems_b__15_154, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EC740, void, _GetItems_b__15_155, app::AdvancedDebugMenuPage_c* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x004EC840, float, _GetItems_b__15_156, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EC8E0, void, _GetItems_b__15_157, app::AdvancedDebugMenuPage_c* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x004EC9E0, float, _GetItems_b__15_158, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004ECA80, void, _GetItems_b__15_159, app::AdvancedDebugMenuPage_c* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x004ECB80, float, _GetItems_b__15_160, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004ECC20, void, _GetItems_b__15_161, app::AdvancedDebugMenuPage_c* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x004ECD20, bool, _GetItems_b__15_177, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004ECDC0, void, _GetItems_b__15_178, app::AdvancedDebugMenuPage_c* this_ptr, bool v)
    IL2CPP_REGISTER_METHOD(0x004ECE70, bool, _GetItems_b__15_179, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004ECF10, void, _GetItems_b__15_180, app::AdvancedDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004ECFC0, bool, _GetItems_b__15_181, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004ED060, void, _GetItems_b__15_182, app::AdvancedDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004ED110, bool, _GetItems_b__15_183, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004ED1B0, void, _GetItems_b__15_184, app::AdvancedDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004ED260, bool, _GetItems_b__15_185, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004ED300, void, _GetItems_b__15_186, app::AdvancedDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004ED3B0, bool, _GetItems_b__15_187, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004ED450, void, _GetItems_b__15_188, app::AdvancedDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004ED500, bool, _GetItems_b__15_189, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004ED5A0, void, _GetItems_b__15_190, app::AdvancedDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004ED650, bool, _GetItems_b__15_191, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004ED6F0, void, _GetItems_b__15_192, app::AdvancedDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004ED7A0, bool, _GetItems_b__15_193, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004ED840, void, _GetItems_b__15_194, app::AdvancedDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004ED8F0, bool, _GetItems_b__15_195, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004ED990, void, _GetItems_b__15_196, app::AdvancedDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004EDA40, bool, _GetItems_b__15_197, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EDAE0, void, _GetItems_b__15_198, app::AdvancedDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004EDB90, bool, _GetItems_b__15_201, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EDBF0, bool, _GetItems_b__15_202, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EDCE0, bool, _GetItems_b__15_203, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EDD70, void, _GetItems_b__15_204, app::AdvancedDebugMenuPage_c* this_ptr, bool v)
    IL2CPP_REGISTER_METHOD(0x004EDE10, bool, _GetItems_b__15_205, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EDEB0, void, _GetItems_b__15_206, app::AdvancedDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004EDF60, bool, _GetItems_b__15_207, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EE000, void, _GetItems_b__15_208, app::AdvancedDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004EE0B0, bool, _GetItems_b__15_209, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EE150, void, _GetItems_b__15_210, app::AdvancedDebugMenuPage_c* this_ptr, bool v)
    IL2CPP_REGISTER_METHOD(0x004EE200, bool, _GetItems_b__15_211, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EE370, bool, _GetItems_b__15_212, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EE400, void, _GetItems_b__15_213, app::AdvancedDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004EE4A0, float, _GetItems_b__15_214, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EE590, void, _GetItems_b__15_215, app::AdvancedDebugMenuPage_c* this_ptr, float a)
    IL2CPP_REGISTER_METHOD(0x004EE690, float, _GetItems_b__15_216, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EE780, void, _GetItems_b__15_217, app::AdvancedDebugMenuPage_c* this_ptr, float a)
    IL2CPP_REGISTER_METHOD(0x004EE880, float, _GetItems_b__15_218, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EE910, void, _GetItems_b__15_219, app::AdvancedDebugMenuPage_c* this_ptr, float a)
    IL2CPP_REGISTER_METHOD(0x004EEA40, float, _GetItems_b__15_220, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EEB30, void, _GetItems_b__15_221, app::AdvancedDebugMenuPage_c* this_ptr, float a)
    IL2CPP_REGISTER_METHOD(0x004EEC30, float, _GetItems_b__15_222, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EED10, void, _GetItems_b__15_223, app::AdvancedDebugMenuPage_c* this_ptr, float a)
    IL2CPP_REGISTER_METHOD(0x004EEE00, float, _GetItems_b__15_224, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EEEE0, void, _GetItems_b__15_225, app::AdvancedDebugMenuPage_c* this_ptr, float a)
    IL2CPP_REGISTER_METHOD(0x004EEFD0, float, _GetItems_b__15_226, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EF0B0, void, _GetItems_b__15_227, app::AdvancedDebugMenuPage_c* this_ptr, float a)
    IL2CPP_REGISTER_METHOD(0x004EF1A0, float, _GetItems_b__15_228, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EF230, void, _GetItems_b__15_229, app::AdvancedDebugMenuPage_c* this_ptr, float a)
    IL2CPP_REGISTER_METHOD(0x004EF360, bool, _GetItems_b__15_232, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EF400, void, _GetItems_b__15_233, app::AdvancedDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x004EF4B0, bool, _GetItems_b__15_234, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EF550, void, _GetItems_b__15_235, app::AdvancedDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x004EF600, bool, _GetItems_b__15_236, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EF6B0, void, _GetItems_b__15_237, app::AdvancedDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x004EF770, bool, _GetItems_b__15_238, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EF810, void, _GetItems_b__15_239, app::AdvancedDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x004EF8C0, bool, _GetItems_b__15_240, app::AdvancedDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004EFAF0, void, _GetItems_b__15_241, app::AdvancedDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(
        0x004EFCE0,
        int32_t,
        _LogUberstate_b__57_0,
        app::AdvancedDebugMenuPage_c* this_ptr,
        app::UberStateValueGroup* group1,
        app::UberStateValueGroup* group2
    )
    IL2CPP_REGISTER_METHOD(
        0x004EFD30,
        int32_t,
        _WriteGroupData_b__58_0,
        app::AdvancedDebugMenuPage_c* this_ptr,
        app::KeyValuePair_2_Moon_UberID_System_Boolean_ pair1,
        app::KeyValuePair_2_Moon_UberID_System_Boolean_ pair2
    )
    IL2CPP_REGISTER_METHOD(
        0x004EFDE0,
        int32_t,
        _WriteGroupData_b__58_1,
        app::AdvancedDebugMenuPage_c* this_ptr,
        app::KeyValuePair_2_Moon_UberID_System_Object_ pair1,
        app::KeyValuePair_2_Moon_UberID_System_Object_ pair2
    )
    IL2CPP_REGISTER_METHOD(
        0x004EFE90,
        int32_t,
        _WriteGroupData_b__58_2,
        app::AdvancedDebugMenuPage_c* this_ptr,
        app::KeyValuePair_2_Moon_UberID_System_Int32_ pair1,
        app::KeyValuePair_2_Moon_UberID_System_Int32_ pair2
    )
    IL2CPP_REGISTER_METHOD(
        0x004EFF40,
        int32_t,
        _WriteGroupData_b__58_3,
        app::AdvancedDebugMenuPage_c* this_ptr,
        app::KeyValuePair_2_Moon_UberID_System_Single_ pair1,
        app::KeyValuePair_2_Moon_UberID_System_Single_ pair2
    )
    IL2CPP_REGISTER_METHOD(
        0x004EFFF0,
        int32_t,
        _WriteGroupData_b__58_4,
        app::AdvancedDebugMenuPage_c* this_ptr,
        app::KeyValuePair_2_Moon_UberID_System_Byte_ pair1,
        app::KeyValuePair_2_Moon_UberID_System_Byte_ pair2
    )
    IL2CPP_REGISTER_METHOD(0x004F00A0, bool, _AwardRandomAchievement_b__65_0, app::AdvancedDebugMenuPage_c* this_ptr, app::CacheData* o)
    IL2CPP_REGISTER_METHOD(0x004F0160, bool, _AdvanceFirstAchievement_b__66_0, app::AdvancedDebugMenuPage_c* this_ptr, app::CacheData* i)
    IL2CPP_REGISTER_METHOD(0x004F0240, bool, _AdvanceFirstAchievement_b__66_1, app::AdvancedDebugMenuPage_c* this_ptr, app::CacheData* i)
    IL2CPP_REGISTER_METHOD(0x004F0320, bool, _AdvanceFirstAchievement_b__66_2, app::AdvancedDebugMenuPage_c* this_ptr, app::CacheData* i)
    IL2CPP_REGISTER_METHOD(0x004F0400, bool, _AdvanceFirstAchievement_b__66_3, app::AdvancedDebugMenuPage_c* this_ptr, app::CacheData* i)
    IL2CPP_REGISTER_METHOD(0x004F04E0, bool, _AdvanceFirstAchievement_b__66_4, app::AdvancedDebugMenuPage_c* this_ptr, app::CacheData* i)
    IL2CPP_REGISTER_METHOD(0x004F05C0, bool, _AdvanceFirstAchievement_b__66_5, app::AdvancedDebugMenuPage_c* this_ptr, app::CacheData* i)
    IL2CPP_REGISTER_METHOD(0x004F06A0, bool, _AdvanceFirstAchievement_b__66_6, app::AdvancedDebugMenuPage_c* this_ptr, app::CacheData* i)
    IL2CPP_REGISTER_METHOD(0x004F0780, bool, _AdvanceFirstAchievement_b__66_7, app::AdvancedDebugMenuPage_c* this_ptr, app::CacheData* i)
    IL2CPP_REGISTER_METHOD(0x004F0860, bool, _AdvanceFirstAchievement_b__66_8, app::AdvancedDebugMenuPage_c* this_ptr, app::CacheData* i)
    IL2CPP_REGISTER_METHOD(0x004F0940, bool, _AdvanceFirstAchievement_b__66_9, app::AdvancedDebugMenuPage_c* this_ptr, app::CacheData* i)
    IL2CPP_REGISTER_METHOD(0x004F0A20, bool, _AdvanceFirstAchievement_b__66_10, app::AdvancedDebugMenuPage_c* this_ptr, app::CacheData* o)
} // namespace app::classes::AdvancedDebugMenuPage___c
