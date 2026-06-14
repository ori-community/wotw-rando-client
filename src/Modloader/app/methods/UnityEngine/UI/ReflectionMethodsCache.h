#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ReflectionMethodsCache.h>

namespace app::classes::UnityEngine::UI::ReflectionMethodsCache {
    IL2CPP_REGISTER_METHOD(0x026657F0, void, ctor, app::ReflectionMethodsCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026666A0, app::ReflectionMethodsCache*, get_Singleton, )
    IL2CPP_REGISTER_METHOD(0x02666890, void, cctor, )
} // namespace app::classes::UnityEngine::UI::ReflectionMethodsCache
