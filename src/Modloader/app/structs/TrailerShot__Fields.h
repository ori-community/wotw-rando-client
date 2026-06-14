#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TrailerShot__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TrailerShot__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrailerShot__Fields_DEFINED)
#define IL2CPP_STRUCT_TrailerShot__Fields_DEFINED
struct String;
struct __declspec(align(8)) TrailerShot__Fields {
    struct String* ScenePath;
    int32_t StartFrame;
    int32_t EndFrame;
    struct String* ReplayPath;
};
#endif
#if !defined(IL2CPP_STRUCT_TrailerShot__Fields_FWDDECL)
#define IL2CPP_STRUCT_TrailerShot__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TrailerShot__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrailerShot__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TrailerShot__Fields_FWDDECL)
#include <Modloader/app/structs/TrailerShot__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TrailerShot__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
