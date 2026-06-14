#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleCollator_Escape_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleCollator_Escape_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleCollator_Escape_DEFINED)
#define IL2CPP_STRUCT_SimpleCollator_Escape_DEFINED
struct String;
struct SimpleCollator_Escape {
    struct String* Source;
    int32_t Index;
    int32_t Start;
    int32_t End;
    int32_t Optional;
};
#endif
#if !defined(IL2CPP_STRUCT_SimpleCollator_Escape_FWDDECL)
#define IL2CPP_STRUCT_SimpleCollator_Escape_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SimpleCollator_Escape_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleCollator_Escape_DEFINED) && !defined(IL2CPP_STRUCT_SimpleCollator_Escape_FWDDECL)
#include <Modloader/app/structs/SimpleCollator_Escape.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleCollator_Escape.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
