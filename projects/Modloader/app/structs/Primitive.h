#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Primitive_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Primitive_INITIALIZING
#if !defined(IL2CPP_STRUCT_Primitive_DEFINED)
#include <Modloader/app/structs/Primitive__Fields.h>
#if defined(IL2CPP_STRUCT_Primitive__Fields_DEFINED)
#define IL2CPP_STRUCT_Primitive_DEFINED
struct Primitive__Class;
struct Primitive {
    struct Primitive__Class* klass;
    MonitorData* monitor;
    struct Primitive__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Primitive_FWDDECL)
#define IL2CPP_STRUCT_Primitive_FWDDECL
#include <Modloader/app/structs/Primitive__Class.h>
#endif
#undef IL2CPP_STRUCT_Primitive_INITIALIZING
#if !defined(IL2CPP_STRUCT_Primitive_DEFINED) && !defined(IL2CPP_STRUCT_Primitive_FWDDECL)
#include <Modloader/app/structs/Primitive.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Primitive.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
