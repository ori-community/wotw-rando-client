#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UberPoolGroupWarmer {
    IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_Progress, (app::UberPoolGroupWarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00449EB0, void, set_Progress, (app::UberPoolGroupWarmer * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00FD4FC0, bool, get_IsDone, (app::UberPoolGroupWarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FD4FF0, void, PrewarmAll, (app::UberPoolGroupWarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FD5160, void, ResetPrewarm, (app::UberPoolGroupWarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FD52D0, void, PrewarmNextPrefab, (app::UberPoolGroupWarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FD5740, void, DoUpdate, (app::UberPoolGroupWarmer * this_ptr, float time_budget))
    IL2CPP_REGISTER_METHOD(0x00FD5970, void, Awake, (app::UberPoolGroupWarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FD5B00, void, ctor, (app::UberPoolGroupWarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::UberPoolGroupWarmer
