#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KnownTypeAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KnownTypeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_KnownTypeAttribute_DEFINED)
#include <Modloader/app/structs/KnownTypeAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_KnownTypeAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_KnownTypeAttribute_DEFINED
struct KnownTypeAttribute__Class;
struct KnownTypeAttribute {
    struct KnownTypeAttribute__Class* klass;
    MonitorData* monitor;
    struct KnownTypeAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KnownTypeAttribute_FWDDECL)
#define IL2CPP_STRUCT_KnownTypeAttribute_FWDDECL
#include <Modloader/app/structs/KnownTypeAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_KnownTypeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_KnownTypeAttribute_DEFINED) && !defined(IL2CPP_STRUCT_KnownTypeAttribute_FWDDECL)
#include <Modloader/app/structs/KnownTypeAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KnownTypeAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
