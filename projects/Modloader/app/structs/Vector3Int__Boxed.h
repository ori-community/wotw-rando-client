#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Vector3Int__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Vector3Int__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector3Int__Boxed_DEFINED)
#include <Modloader/app/structs/Vector3Int.h>
#if defined(IL2CPP_STRUCT_Vector3Int_DEFINED)
#define IL2CPP_STRUCT_Vector3Int__Boxed_DEFINED
struct Vector3Int__Class;
struct Vector3Int__Boxed {
    struct Vector3Int__Class* klass;
    MonitorData* monitor;
    struct Vector3Int fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Vector3Int__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Vector3Int__Boxed_FWDDECL
#include <Modloader/app/structs/Vector3Int__Class.h>
#endif
#undef IL2CPP_STRUCT_Vector3Int__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector3Int__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Vector3Int__Boxed_FWDDECL)
#include <Modloader/app/structs/Vector3Int__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Vector3Int__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
