#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Context__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Context__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Context__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Context__StaticFields_DEFINED
struct Object__Array;
struct IMessageSink;
struct LocalDataStoreMgr;
struct DynamicPropertyCollection;
struct Context__StaticFields {
    struct Object__Array* local_slots;
    struct IMessageSink* default_server_context_sink;
    int32_t global_count;
    struct LocalDataStoreMgr* _localDataStoreMgr;
    struct DynamicPropertyCollection* global_dynamic_properties;
};
#endif
#if !defined(IL2CPP_STRUCT_Context__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Context__StaticFields_FWDDECL
#include <Modloader/app/structs/DynamicPropertyCollection.h>
#include <Modloader/app/structs/IMessageSink.h>
#include <Modloader/app/structs/LocalDataStoreMgr.h>
#include <Modloader/app/structs/Object__Array.h>
#endif
#undef IL2CPP_STRUCT_Context__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Context__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Context__StaticFields_FWDDECL)
#include <Modloader/app/structs/Context__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Context__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
