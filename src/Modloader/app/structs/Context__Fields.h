#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Context__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Context__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Context__Fields_DEFINED)
#define IL2CPP_STRUCT_Context__Fields_DEFINED
struct IMessageSink;
struct List_1_System_Runtime_Remoting_Contexts_IContextProperty_;
struct LocalDataStoreHolder;
struct DynamicPropertyCollection;
struct ContextCallbackObject;
struct __declspec(align(8)) Context__Fields {
    int32_t domain_id;
    int32_t context_id;
    void* static_data;
    void* data;
    struct IMessageSink* server_context_sink_chain;
    struct IMessageSink* client_context_sink_chain;
    struct List_1_System_Runtime_Remoting_Contexts_IContextProperty_* context_properties;
    struct LocalDataStoreHolder* _localDataStore;
    struct DynamicPropertyCollection* context_dynamic_properties;
    struct ContextCallbackObject* callback_object;
};
#endif
#if !defined(IL2CPP_STRUCT_Context__Fields_FWDDECL)
#define IL2CPP_STRUCT_Context__Fields_FWDDECL
#include <Modloader/app/structs/ContextCallbackObject.h>
#include <Modloader/app/structs/DynamicPropertyCollection.h>
#include <Modloader/app/structs/IMessageSink.h>
#include <Modloader/app/structs/List_1_System_Runtime_Remoting_Contexts_IContextProperty_.h>
#include <Modloader/app/structs/LocalDataStoreHolder.h>
#endif
#undef IL2CPP_STRUCT_Context__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Context__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Context__Fields_FWDDECL)
#include <Modloader/app/structs/Context__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Context__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
