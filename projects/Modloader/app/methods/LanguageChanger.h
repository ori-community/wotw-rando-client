#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LanguageChanger.h>

namespace app::classes::LanguageChanger {
    IL2CPP_REGISTER_METHOD(0x00F03030, void, Awake, (app::LanguageChanger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F031B0, void, OnDestroy, (app::LanguageChanger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnItemPressed, (app::LanguageChanger * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04744BD0, LanguageChanger_OnItemPressed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F03320, bool, get_ItemSelected, (app::LanguageChanger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F03410, void, FixedUpdate, (app::LanguageChanger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LanguageChanger * this_ptr))
} // namespace app::classes::LanguageChanger
