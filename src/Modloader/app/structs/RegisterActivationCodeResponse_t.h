#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegisterActivationCodeResponse_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegisterActivationCodeResponse_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegisterActivationCodeResponse_t_DEFINED)
#include <Modloader/app/structs/ERegisterActivationCodeResult__Enum.h>
#if defined(IL2CPP_STRUCT_ERegisterActivationCodeResult__Enum_DEFINED)
#define IL2CPP_STRUCT_RegisterActivationCodeResponse_t_DEFINED
struct RegisterActivationCodeResponse_t {
    ERegisterActivationCodeResult__Enum m_eResult;

    uint32_t m_unPackageRegistered;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegisterActivationCodeResponse_t_FWDDECL)
#define IL2CPP_STRUCT_RegisterActivationCodeResponse_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_RegisterActivationCodeResponse_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegisterActivationCodeResponse_t_DEFINED) && !defined(IL2CPP_STRUCT_RegisterActivationCodeResponse_t_FWDDECL)
#include <Modloader/app/structs/RegisterActivationCodeResponse_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegisterActivationCodeResponse_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
