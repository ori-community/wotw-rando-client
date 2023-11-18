#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FieldAccessException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FieldAccessException_INITIALIZING
#if !defined(IL2CPP_STRUCT_FieldAccessException_DEFINED)
#include <Modloader/app/structs/FieldAccessException__Fields.h>
#if defined(IL2CPP_STRUCT_FieldAccessException__Fields_DEFINED)
#define IL2CPP_STRUCT_FieldAccessException_DEFINED
struct FieldAccessException__Class;
struct FieldAccessException {
    struct FieldAccessException__Class* klass;
    MonitorData* monitor;
    struct FieldAccessException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FieldAccessException_FWDDECL)
#define IL2CPP_STRUCT_FieldAccessException_FWDDECL
#include <Modloader/app/structs/FieldAccessException__Class.h>
#endif
#undef IL2CPP_STRUCT_FieldAccessException_INITIALIZING
#if !defined(IL2CPP_STRUCT_FieldAccessException_DEFINED) && !defined(IL2CPP_STRUCT_FieldAccessException_FWDDECL)
#include <Modloader/app/structs/FieldAccessException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FieldAccessException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
