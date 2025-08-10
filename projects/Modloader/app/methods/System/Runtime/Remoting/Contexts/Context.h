#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Context.h>
#include <Modloader/app/structs/ContextBoundObject.h>
#include <Modloader/app/structs/CrossContextDelegate.h>
#include <Modloader/app/structs/DynamicPropertyCollection.h>
#include <Modloader/app/structs/IConstructionCallMessage.h>
#include <Modloader/app/structs/IContextProperty.h>
#include <Modloader/app/structs/IContextProperty__Array.h>
#include <Modloader/app/structs/IDynamicProperty.h>
#include <Modloader/app/structs/IMessage.h>
#include <Modloader/app/structs/IMessageSink.h>
#include <Modloader/app/structs/LocalDataStore.h>
#include <Modloader/app/structs/LocalDataStoreSlot.h>
#include <Modloader/app/structs/MarshalByRefObject.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Runtime::Remoting::Contexts::Context {
    IL2CPP_REGISTER_METHOD(0x0173D7D0, void, RegisterContext, app::Context* ctx)
    IL2CPP_REGISTER_METHOD(0x0173D7D0, void, ReleaseContext, app::Context* ctx)
    IL2CPP_REGISTER_METHOD(0x023020D0, void, ctor, app::Context* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023021B0, void, Finalize, app::Context* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0228D860, app::Context*, get_DefaultContext, )
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_ContextID, app::Context* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02302270, app::IContextProperty__Array*, get_ContextProperties, app::Context* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02302310, bool, get_IsDefaultContext, app::Context* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02302320, bool, get_NeedsContextSink, app::Context* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02302460, bool, RegisterDynamicProperty, app::IDynamicProperty* prop, app::ContextBoundObject* obj, app::Context* ctx)
    IL2CPP_REGISTER_METHOD(0x02302530, bool, UnregisterDynamicProperty, app::String* name, app::ContextBoundObject* obj, app::Context* ctx)
    IL2CPP_REGISTER_METHOD(0x02302600, app::DynamicPropertyCollection*, GetDynamicPropertyCollection, app::ContextBoundObject* obj, app::Context* ctx)
    IL2CPP_REGISTER_METHOD(0x02302940, void, NotifyGlobalDynamicSinks, bool start, app::IMessage* req_msg, bool client_site, bool async)
    IL2CPP_REGISTER_METHOD(0x02302AD0, bool, get_HasGlobalDynamicSinks, )
    IL2CPP_REGISTER_METHOD(0x02302BD0, void, NotifyDynamicSinks, app::Context* this_ptr, bool start, app::IMessage* req_msg, bool client_site, bool async)
    IL2CPP_REGISTER_METHOD(0x02302C70, bool, get_HasDynamicSinks, app::Context* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02302CB0, bool, get_HasExitSinks, app::Context* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02302DE0, app::IContextProperty*, GetProperty, app::Context* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02302FB0, void, SetProperty, app::Context* this_ptr, app::IContextProperty* prop)
    IL2CPP_REGISTER_METHOD(0x023031F0, void, Freeze, app::Context* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023033A0, app::String*, ToString, app::Context* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02303440, app::IMessageSink*, GetServerContextSinkChain, app::Context* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023036A0, app::IMessageSink*, GetClientContextSinkChain, app::Context* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x023038F0,
        app::IMessageSink*,
        CreateServerObjectSinkChain,
        app::Context* this_ptr,
        app::MarshalByRefObject* obj,
        bool force_internal_execute
    )
    IL2CPP_REGISTER_METHOD(0x02303CE0, app::IMessageSink*, CreateEnvoySink, app::Context* this_ptr, app::MarshalByRefObject* server_object)
    IL2CPP_REGISTER_METHOD(0x02303EA0, app::Context*, SwitchToContext, app::Context* new_context)
    IL2CPP_REGISTER_METHOD(0x02303EB0, app::Context*, CreateNewContext, app::IConstructionCallMessage* msg)
    IL2CPP_REGISTER_METHOD(0x02303F10, void, DoCallBack, app::Context* this_ptr, app::CrossContextDelegate* deleg)
    IL2CPP_REGISTER_METHOD(0x02304070, app::LocalDataStore*, get_MyLocalStore, app::Context* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02304270, app::LocalDataStoreSlot*, AllocateDataSlot, )
    IL2CPP_REGISTER_METHOD(0x02304320, app::LocalDataStoreSlot*, AllocateNamedDataSlot, app::String* name)
    IL2CPP_REGISTER_METHOD(0x023043E0, void, FreeNamedDataSlot, app::String* name)
    IL2CPP_REGISTER_METHOD(0x023044A0, app::LocalDataStoreSlot*, GetNamedDataSlot, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02304560, app::Object*, GetData, app::LocalDataStoreSlot* slot)
    IL2CPP_REGISTER_METHOD(0x02304700, void, SetData, app::LocalDataStoreSlot* slot, app::Object* data)
    IL2CPP_REGISTER_METHOD(0x02304780, void, cctor, )
} // namespace app::classes::System::Runtime::Remoting::Contexts::Context
