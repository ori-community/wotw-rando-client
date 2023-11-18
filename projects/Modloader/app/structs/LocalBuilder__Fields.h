#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocalBuilder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocalBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalBuilder__Fields_DEFINED)
#include <Modloader/app/structs/LocalVariableInfo__Fields.h>
#if defined(IL2CPP_STRUCT_LocalVariableInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_LocalBuilder__Fields_DEFINED
struct String;
struct ILGenerator;
struct LocalBuilder__Fields {
    struct LocalVariableInfo__Fields _;
    struct String* name;
    struct ILGenerator* ilgen;
    int32_t startOffset;
    int32_t endOffset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocalBuilder__Fields_FWDDECL)
#define IL2CPP_STRUCT_LocalBuilder__Fields_FWDDECL
#include <Modloader/app/structs/ILGenerator.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_LocalBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalBuilder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LocalBuilder__Fields_FWDDECL)
#include <Modloader/app/structs/LocalBuilder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocalBuilder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
