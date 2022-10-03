#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RuntimeGuidMapping {
    IL2CPP_REGISTER_METHOD(0x02719EB0, void, ForceRefresh, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintResults, (app::RuntimeGuidMapping * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02719EF0, app::RuntimeGuidMapping*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Initialize, (app::RuntimeGuidMapping * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0271A190, void, Refresh, (app::RuntimeGuidMapping * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0271A1A0, void, Parse, (app::RuntimeGuidMapping * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0271A460, app::Byte__Array*, ReadFileWithWWW, (app::RuntimeGuidMapping * this_ptr, app::String* file_path))
    IL2CPP_REGISTER_METHODINFO(0x04799FC8, RuntimeGuidMapping_ReadFileWithWWW__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0271A7F0, uint32_t, Get, (app::RuntimeGuidMapping * this_ptr, uint32_t hash, app::Byte__Array* guid_bytes))
    IL2CPP_REGISTER_METHOD(0x0271AA30, bool, TryGet, (app::RuntimeGuidMapping * this_ptr, uint32_t hash, app::Byte__Array* guid_bytes, uint32_t* result))
    IL2CPP_REGISTER_METHOD(0x0271ACC0, bool, IsNullGuid, (app::RuntimeGuidMapping * this_ptr, app::Byte__Array* guid_bytes))
    IL2CPP_REGISTER_METHOD(0x0271AD10, void, AddMapping, (app::RuntimeGuidMapping * this_ptr, app::Byte__Array* guid_bytes, uint32_t hash, uint32_t id))
    IL2CPP_REGISTER_METHOD(0x0271AF20, void, ctor, (app::RuntimeGuidMapping * this_ptr))
} // namespace app::classes::RuntimeGuidMapping
