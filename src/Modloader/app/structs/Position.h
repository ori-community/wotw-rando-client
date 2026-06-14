#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Position_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Position_INITIALIZING
#if !defined(IL2CPP_STRUCT_Position_DEFINED)
#define IL2CPP_STRUCT_Position_DEFINED
struct Object;
struct Position {
    int32_t symbol;
    struct Object* particle;
};
#endif
#if !defined(IL2CPP_STRUCT_Position_FWDDECL)
#define IL2CPP_STRUCT_Position_FWDDECL
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_Position_INITIALIZING
#if !defined(IL2CPP_STRUCT_Position_DEFINED) && !defined(IL2CPP_STRUCT_Position_FWDDECL)
#include <Modloader/app/structs/Position.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Position.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
