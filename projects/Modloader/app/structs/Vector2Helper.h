#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Vector2Helper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Vector2Helper_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector2Helper_DEFINED)
#define IL2CPP_STRUCT_Vector2Helper_DEFINED
struct Vector2Helper__Class;
struct Vector2Helper {
    struct Vector2Helper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Vector2Helper_FWDDECL)
#define IL2CPP_STRUCT_Vector2Helper_FWDDECL
#include <Modloader/app/structs/Vector2Helper__Class.h>
#endif
#undef IL2CPP_STRUCT_Vector2Helper_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector2Helper_DEFINED) && !defined(IL2CPP_STRUCT_Vector2Helper_FWDDECL)
#include <Modloader/app/structs/Vector2Helper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Vector2Helper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
