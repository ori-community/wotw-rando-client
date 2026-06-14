#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Vector3Ser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Vector3Ser_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector3Ser_DEFINED)
#include <Modloader/app/structs/Vector3Ser__Fields.h>
#if defined(IL2CPP_STRUCT_Vector3Ser__Fields_DEFINED)
#define IL2CPP_STRUCT_Vector3Ser_DEFINED
struct Vector3Ser__Class;
struct Vector3Ser {
    struct Vector3Ser__Class* klass;
    MonitorData* monitor;
    struct Vector3Ser__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Vector3Ser_FWDDECL)
#define IL2CPP_STRUCT_Vector3Ser_FWDDECL
#include <Modloader/app/structs/Vector3Ser__Class.h>
#endif
#undef IL2CPP_STRUCT_Vector3Ser_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector3Ser_DEFINED) && !defined(IL2CPP_STRUCT_Vector3Ser_FWDDECL)
#include <Modloader/app/structs/Vector3Ser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Vector3Ser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
