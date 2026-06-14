#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocalVariableInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocalVariableInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalVariableInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_LocalVariableInfo__Fields_DEFINED
struct Type;
struct __declspec(align(8)) LocalVariableInfo__Fields {
    struct Type* type;
    bool is_pinned;
    uint16_t position;
};
#endif
#if !defined(IL2CPP_STRUCT_LocalVariableInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_LocalVariableInfo__Fields_FWDDECL
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_LocalVariableInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalVariableInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LocalVariableInfo__Fields_FWDDECL)
#include <Modloader/app/structs/LocalVariableInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocalVariableInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
