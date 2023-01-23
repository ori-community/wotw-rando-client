#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayableBinding_CreateOutputMethod.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PlayableOutput.h>
#include <Modloader/app/structs/PlayableGraph.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::UnityEngine::Playables::PlayableBinding_CreateOutputMethod {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::PlayableBinding_CreateOutputMethod * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02964470, app::PlayableOutput, Invoke, (app::PlayableBinding_CreateOutputMethod * this_ptr, app::PlayableGraph graph, app::String* name))
    IL2CPP_REGISTER_METHOD(0x02964950, app::IAsyncResult*, BeginInvoke, (app::PlayableBinding_CreateOutputMethod * this_ptr, app::PlayableGraph graph, app::String* name, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x01C7A680, app::PlayableOutput, EndInvoke, (app::PlayableBinding_CreateOutputMethod * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::UnityEngine::Playables::PlayableBinding_CreateOutputMethod
