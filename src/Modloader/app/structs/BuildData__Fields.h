#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BuildData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BuildData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuildData__Fields_DEFINED)
#define IL2CPP_STRUCT_BuildData__Fields_DEFINED
struct String;
struct __declspec(align(8)) BuildData__Fields {
    int32_t FixedUpdateIndex;
    struct String* BuildPath;
    struct String* Revision;
    struct String* BuildID;
};
#endif
#if !defined(IL2CPP_STRUCT_BuildData__Fields_FWDDECL)
#define IL2CPP_STRUCT_BuildData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_BuildData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuildData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BuildData__Fields_FWDDECL)
#include <Modloader/app/structs/BuildData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BuildData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
