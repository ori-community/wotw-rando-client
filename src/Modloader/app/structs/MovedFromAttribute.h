#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MovedFromAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MovedFromAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovedFromAttribute_DEFINED)
#include <Modloader/app/structs/MovedFromAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_MovedFromAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_MovedFromAttribute_DEFINED
struct MovedFromAttribute__Class;
struct MovedFromAttribute {
    struct MovedFromAttribute__Class* klass;
    MonitorData* monitor;
    struct MovedFromAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MovedFromAttribute_FWDDECL)
#define IL2CPP_STRUCT_MovedFromAttribute_FWDDECL
#include <Modloader/app/structs/MovedFromAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_MovedFromAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovedFromAttribute_DEFINED) && !defined(IL2CPP_STRUCT_MovedFromAttribute_FWDDECL)
#include <Modloader/app/structs/MovedFromAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MovedFromAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
