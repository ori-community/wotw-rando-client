#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Type_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Type_INITIALIZING
#if !defined(IL2CPP_STRUCT_Type_DEFINED)
#include <Modloader/app/structs/Type__Fields.h>
#if defined(IL2CPP_STRUCT_Type__Fields_DEFINED)
#define IL2CPP_STRUCT_Type_DEFINED
struct Type__Class;
struct Type {
    struct Type__Class* klass;
    MonitorData* monitor;
    struct Type__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Type_FWDDECL)
#define IL2CPP_STRUCT_Type_FWDDECL
#include <Modloader/app/structs/Type__Class.h>
#endif
#undef IL2CPP_STRUCT_Type_INITIALIZING
#if !defined(IL2CPP_STRUCT_Type_DEFINED) && !defined(IL2CPP_STRUCT_Type_FWDDECL)
#include <Modloader/app/structs/Type.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Type.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
