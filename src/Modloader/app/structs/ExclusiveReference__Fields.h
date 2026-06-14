#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExclusiveReference__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExclusiveReference__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExclusiveReference__Fields_DEFINED)
#define IL2CPP_STRUCT_ExclusiveReference__Fields_DEFINED
struct RegexRunner;
struct Object;
struct __declspec(align(8)) ExclusiveReference__Fields {
    struct RegexRunner* _ref;
    struct Object* _obj;
    int32_t _locked;
};
#endif
#if !defined(IL2CPP_STRUCT_ExclusiveReference__Fields_FWDDECL)
#define IL2CPP_STRUCT_ExclusiveReference__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RegexRunner.h>
#endif
#undef IL2CPP_STRUCT_ExclusiveReference__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExclusiveReference__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ExclusiveReference__Fields_FWDDECL)
#include <Modloader/app/structs/ExclusiveReference__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExclusiveReference__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
