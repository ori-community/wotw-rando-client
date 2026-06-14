#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexFCD__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexFCD__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexFCD__Fields_DEFINED)
#define IL2CPP_STRUCT_RegexFCD__Fields_DEFINED
struct Int32__Array;
struct RegexFC__Array;
struct __declspec(align(8)) RegexFCD__Fields {
    struct Int32__Array* _intStack;
    int32_t _intDepth;
    struct RegexFC__Array* _fcStack;
    int32_t _fcDepth;
    bool _skipAllChildren;
    bool _skipchild;
    bool _failed;
};
#endif
#if !defined(IL2CPP_STRUCT_RegexFCD__Fields_FWDDECL)
#define IL2CPP_STRUCT_RegexFCD__Fields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/RegexFC__Array.h>
#endif
#undef IL2CPP_STRUCT_RegexFCD__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexFCD__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RegexFCD__Fields_FWDDECL)
#include <Modloader/app/structs/RegexFCD__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexFCD__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
