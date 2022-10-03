#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AbilitiesPlugin {
    IL2CPP_REGISTER_METHOD(0x004ABA40, app::Object*, ReflectionHack, (app::String * full_name))
    IL2CPP_REGISTER_METHODINFO(0x047272F0, AbilitiesPlugin_ReflectionHack__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (app::AbilitiesPlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x004ABB80, void, RecordCycle, (app::AbilitiesPlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x004ABDA0, void, Exit, (app::AbilitiesPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004ABE40, void, HandleType, (app::AbilitiesPlugin * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x004AC050, void, HandleField, (app::AbilitiesPlugin * this_ptr, app::Object* obj, app::FieldInfo_1* field_info))
    IL2CPP_REGISTER_METHOD(0x004AC300, bool, CompareValues, (app::AbilitiesPlugin * this_ptr, app::Object* value_a, app::Object* value_b))
    IL2CPP_REGISTER_METHOD(0x004AC3F0, void, Record, (app::AbilitiesPlugin * this_ptr, app::Object* obj, app::FieldInfo_1* field_info))
    IL2CPP_REGISTER_METHOD(0x004AC7C0, void, PopulateFieldInfoDictionary, (app::AbilitiesPlugin * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x004ACA60, void, Awake, (app::AbilitiesPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004ACB20, app::List_1_UnityEngine_Vector3_*, ExtractDataFromRecorder, (app::RecorderData * recorder_data))
    IL2CPP_REGISTER_METHOD(0x004ACE50, void, ctor, (app::AbilitiesPlugin * this_ptr))
} // namespace app::classes::AbilitiesPlugin
