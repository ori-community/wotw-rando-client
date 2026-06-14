#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeDescriptor__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeDescriptor__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeDescriptor__StaticFields_DEFINED)
#define IL2CPP_STRUCT_TypeDescriptor__StaticFields_DEFINED
struct WeakHashtable;
struct Hashtable;
struct BooleanSwitch;
struct Guid__Array;
struct Object;
struct RefreshEventHandler;
struct TypeDescriptor__StaticFields {
    struct WeakHashtable* _providerTable;
    struct Hashtable* _providerTypeTable;
    struct Hashtable* _defaultProviders;
    struct WeakHashtable* _associationTable;
    int32_t _metadataVersion;
    int32_t _collisionIndex;
    struct BooleanSwitch* TraceDescriptor;
    struct Guid__Array* _pipelineInitializeKeys;
    struct Guid__Array* _pipelineMergeKeys;
    struct Guid__Array* _pipelineFilterKeys;
    struct Guid__Array* _pipelineAttributeFilterKeys;
    struct Object* _internalSyncObject;
    struct RefreshEventHandler* Refreshed;
};
#endif
#if !defined(IL2CPP_STRUCT_TypeDescriptor__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_TypeDescriptor__StaticFields_FWDDECL
#include <Modloader/app/structs/BooleanSwitch.h>
#include <Modloader/app/structs/Guid__Array.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RefreshEventHandler.h>
#include <Modloader/app/structs/WeakHashtable.h>
#endif
#undef IL2CPP_STRUCT_TypeDescriptor__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeDescriptor__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_TypeDescriptor__StaticFields_FWDDECL)
#include <Modloader/app/structs/TypeDescriptor__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeDescriptor__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
