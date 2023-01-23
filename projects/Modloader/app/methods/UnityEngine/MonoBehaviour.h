#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MonoBehaviour.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Coroutine.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object_1.h>

namespace app::classes::UnityEngine::MonoBehaviour {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MonoBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0253C7F0, bool, IsInvoking_1, (app::MonoBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0253C840, void, CancelInvoke_1, (app::MonoBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0253C890, void, Invoke, (app::MonoBehaviour * this_ptr, app::String* method_name, float time))
    IL2CPP_REGISTER_METHOD(0x0253C8B0, void, InvokeRepeating, (app::MonoBehaviour * this_ptr, app::String* method_name, float time, float repeat_rate))
    IL2CPP_REGISTER_METHODINFO(0x047531A8, MonoBehaviour_InvokeRepeating__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0253C9B0, void, CancelInvoke_2, (app::MonoBehaviour * this_ptr, app::String* method_name))
    IL2CPP_REGISTER_METHOD(0x0253CA10, bool, IsInvoking_2, (app::MonoBehaviour * this_ptr, app::String* method_name))
    IL2CPP_REGISTER_METHOD(0x0253CA70, app::Coroutine*, StartCoroutine_1, (app::MonoBehaviour * this_ptr, app::String* method_name))
    IL2CPP_REGISTER_METHOD(0x0253CC00, app::Coroutine*, StartCoroutine_2, (app::MonoBehaviour * this_ptr, app::String* method_name, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x047411D8, MonoBehaviour_StartCoroutine_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0253CD90, app::Coroutine*, StartCoroutine_3, (app::MonoBehaviour * this_ptr, app::IEnumerator* routine))
    IL2CPP_REGISTER_METHODINFO(0x0476BFA0, MonoBehaviour_StartCoroutine_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0253CF10, app::Coroutine*, StartCoroutine_Auto, (app::MonoBehaviour * this_ptr, app::IEnumerator* routine))
    IL2CPP_REGISTER_METHOD(0x0253CF20, void, StopCoroutine_1, (app::MonoBehaviour * this_ptr, app::IEnumerator* routine))
    IL2CPP_REGISTER_METHODINFO(0x04740548, MonoBehaviour_StopCoroutine__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0253D0A0, void, StopCoroutine_2, (app::MonoBehaviour * this_ptr, app::Coroutine* routine))
    IL2CPP_REGISTER_METHODINFO(0x04749F50, MonoBehaviour_StopCoroutine_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0253D220, void, StopCoroutine_3, (app::MonoBehaviour * this_ptr, app::String* method_name))
    IL2CPP_REGISTER_METHOD(0x0253D280, void, StopAllCoroutines, (app::MonoBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0253D2D0, bool, get_useGUILayout, (app::MonoBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0253D320, void, set_useGUILayout, (app::MonoBehaviour * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0253D380, void, print, (app::Object * message))
    IL2CPP_REGISTER_METHOD(0x0253C840, void, Internal_CancelInvokeAll, (app::MonoBehaviour * self))
    IL2CPP_REGISTER_METHOD(0x0253C7F0, bool, Internal_IsInvokingAll, (app::MonoBehaviour * self))
    IL2CPP_REGISTER_METHOD(0x0253D420, void, InvokeDelayed, (app::MonoBehaviour * self, app::String* method_name, float time, float repeat_rate))
    IL2CPP_REGISTER_METHOD(0x0253C9B0, void, CancelInvoke_3, (app::MonoBehaviour * self, app::String* method_name))
    IL2CPP_REGISTER_METHOD(0x0253CA10, bool, IsInvoking_3, (app::MonoBehaviour * self, app::String* method_name))
    IL2CPP_REGISTER_METHOD(0x0253D4A0, bool, IsObjectMonoBehaviour, (app::Object_1 * obj))
    IL2CPP_REGISTER_METHOD(0x0253D4F0, app::Coroutine*, StartCoroutineManaged, (app::MonoBehaviour * this_ptr, app::String* method_name, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0253D560, app::Coroutine*, StartCoroutineManaged2, (app::MonoBehaviour * this_ptr, app::IEnumerator* enumerator))
    IL2CPP_REGISTER_METHOD(0x0253D5C0, void, StopCoroutineManaged, (app::MonoBehaviour * this_ptr, app::Coroutine* routine))
    IL2CPP_REGISTER_METHOD(0x0253D620, void, StopCoroutineFromEnumeratorManaged, (app::MonoBehaviour * this_ptr, app::IEnumerator* routine))
    IL2CPP_REGISTER_METHOD(0x0253D680, app::String*, GetScriptClassName, (app::MonoBehaviour * this_ptr))
} // namespace app::classes::UnityEngine::MonoBehaviour
