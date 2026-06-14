#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReplayData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReplayData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayData__Fields_DEFINED)
#define IL2CPP_STRUCT_ReplayData__Fields_DEFINED
struct String;
struct __declspec(align(8)) ReplayData__Fields {
    int32_t version;
    struct String* player;
    float duration;
    struct String* replay;
    struct String* _Filename_k__BackingField;
    struct String* _Data_k__BackingField;
    bool _IsReady_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_ReplayData__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReplayData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ReplayData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReplayData__Fields_FWDDECL)
#include <Modloader/app/structs/ReplayData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReplayData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
