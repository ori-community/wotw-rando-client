#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Light__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Light__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Light__Fields_DEFINED)
#include <Modloader/app/structs/Behaviour__Fields.h>
#if defined(IL2CPP_STRUCT_Behaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_Light__Fields_DEFINED
struct Light__Fields {
    struct Behaviour__Fields _;
    int32_t m_BakedIndex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Light__Fields_FWDDECL)
#define IL2CPP_STRUCT_Light__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Light__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Light__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Light__Fields_FWDDECL)
#include <Modloader/app/structs/Light__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Light__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
