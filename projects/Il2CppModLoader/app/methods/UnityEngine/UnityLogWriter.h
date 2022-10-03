#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::UnityLogWriter {
    IL2CPP_REGISTER_METHOD(0x02C70CE0, void, ctor, (app::UnityLogWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C70E20, void, WriteStringToUnityLog, (app::String * s))
    IL2CPP_REGISTER_METHOD(0x02C70E80, void, WriteStringToUnityLogImpl, (app::String * s))
    IL2CPP_REGISTER_METHOD(0x02C70ED0, void, Init, ())
    IL2CPP_REGISTER_METHOD(0x02C711D0, app::Encoding*, get_Encoding, (app::UnityLogWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C711E0, void, Write_1, (app::UnityLogWriter * this_ptr, uint16_t value))
    IL2CPP_REGISTER_METHOD(0x02C71250, void, Write_2, (app::UnityLogWriter * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x02C712B0, void, Write_3, (app::UnityLogWriter * this_ptr, app::Char__Array* buffer, int32_t index, int32_t count))
} // namespace app::classes::UnityEngine::UnityLogWriter
