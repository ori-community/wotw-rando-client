#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Vector2Ser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Vector2Ser_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector2Ser_DEFINED)
#include <Modloader/app/structs/Vector2Ser__Fields.h>
#if defined(IL2CPP_STRUCT_Vector2Ser__Fields_DEFINED)
#define IL2CPP_STRUCT_Vector2Ser_DEFINED
struct Vector2Ser__Class;
struct Vector2Ser {
    struct Vector2Ser__Class* klass;
    MonitorData* monitor;
    struct Vector2Ser__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Vector2Ser_FWDDECL)
#define IL2CPP_STRUCT_Vector2Ser_FWDDECL
#include <Modloader/app/structs/Vector2Ser__Class.h>
#endif
#undef IL2CPP_STRUCT_Vector2Ser_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector2Ser_DEFINED) && !defined(IL2CPP_STRUCT_Vector2Ser_FWDDECL)
#include <Modloader/app/structs/Vector2Ser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Vector2Ser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
