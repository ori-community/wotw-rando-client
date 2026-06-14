#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SemanticMeaning_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SemanticMeaning_INITIALIZING
#if !defined(IL2CPP_STRUCT_SemanticMeaning_DEFINED)
#define IL2CPP_STRUCT_SemanticMeaning_DEFINED
struct String;
struct String__Array;
struct SemanticMeaning {
    struct String* key;
    struct String__Array* values;
};
#endif
#if !defined(IL2CPP_STRUCT_SemanticMeaning_FWDDECL)
#define IL2CPP_STRUCT_SemanticMeaning_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_SemanticMeaning_INITIALIZING
#if !defined(IL2CPP_STRUCT_SemanticMeaning_DEFINED) && !defined(IL2CPP_STRUCT_SemanticMeaning_FWDDECL)
#include <Modloader/app/structs/SemanticMeaning.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SemanticMeaning.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
