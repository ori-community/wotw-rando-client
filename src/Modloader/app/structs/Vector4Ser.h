#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Vector4Ser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Vector4Ser_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector4Ser_DEFINED)
#include <Modloader/app/structs/Vector4Ser__Fields.h>
#if defined(IL2CPP_STRUCT_Vector4Ser__Fields_DEFINED)
#define IL2CPP_STRUCT_Vector4Ser_DEFINED
struct Vector4Ser__Class;
struct Vector4Ser {
    struct Vector4Ser__Class* klass;
    MonitorData* monitor;
    struct Vector4Ser__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Vector4Ser_FWDDECL)
#define IL2CPP_STRUCT_Vector4Ser_FWDDECL
#include <Modloader/app/structs/Vector4Ser__Class.h>
#endif
#undef IL2CPP_STRUCT_Vector4Ser_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector4Ser_DEFINED) && !defined(IL2CPP_STRUCT_Vector4Ser_FWDDECL)
#include <Modloader/app/structs/Vector4Ser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Vector4Ser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
