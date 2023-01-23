#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ImmutableObjectAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ImmutableObjectAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ImmutableObjectAttribute_DEFINED)
#include <Modloader/app/structs/ImmutableObjectAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_ImmutableObjectAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_ImmutableObjectAttribute_DEFINED
struct ImmutableObjectAttribute__Class;
struct ImmutableObjectAttribute {
    struct ImmutableObjectAttribute__Class* klass;
    MonitorData* monitor;
    struct ImmutableObjectAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ImmutableObjectAttribute_FWDDECL)
#define IL2CPP_STRUCT_ImmutableObjectAttribute_FWDDECL
#include <Modloader/app/structs/ImmutableObjectAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ImmutableObjectAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ImmutableObjectAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ImmutableObjectAttribute_FWDDECL)
#include <Modloader/app/structs/ImmutableObjectAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ImmutableObjectAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
