#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Vector2Int__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Vector2Int__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector2Int__Boxed_DEFINED)
#include <Modloader/app/structs/Vector2Int.h>
#if defined(IL2CPP_STRUCT_Vector2Int_DEFINED)
#define IL2CPP_STRUCT_Vector2Int__Boxed_DEFINED
struct Vector2Int__Class;
struct Vector2Int__Boxed {
    struct Vector2Int__Class* klass;
    MonitorData* monitor;
    struct Vector2Int fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Vector2Int__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Vector2Int__Boxed_FWDDECL
#include <Modloader/app/structs/Vector2Int__Class.h>
#endif
#undef IL2CPP_STRUCT_Vector2Int__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector2Int__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Vector2Int__Boxed_FWDDECL)
#include <Modloader/app/structs/Vector2Int__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Vector2Int__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
