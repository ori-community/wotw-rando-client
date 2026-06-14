#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoteConfigSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoteConfigSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteConfigSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_RemoteConfigSettings__Fields_DEFINED
struct Action_1_Boolean_;
struct __declspec(align(8)) RemoteConfigSettings__Fields {
    void* m_Ptr;
    struct Action_1_Boolean_* Updated;
};
#endif
#if !defined(IL2CPP_STRUCT_RemoteConfigSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_RemoteConfigSettings__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Boolean_.h>
#endif
#undef IL2CPP_STRUCT_RemoteConfigSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteConfigSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RemoteConfigSettings__Fields_FWDDECL)
#include <Modloader/app/structs/RemoteConfigSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoteConfigSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
