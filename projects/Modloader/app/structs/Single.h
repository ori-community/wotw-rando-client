#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Single_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Single_INITIALIZING
#if !defined(IL2CPP_STRUCT_Single_DEFINED)
#define IL2CPP_STRUCT_Single_DEFINED
struct Single {
    float m_value;
};
#endif
#if !defined(IL2CPP_STRUCT_Single_FWDDECL)
#define IL2CPP_STRUCT_Single_FWDDECL
#endif
#undef IL2CPP_STRUCT_Single_INITIALIZING
#if !defined(IL2CPP_STRUCT_Single_DEFINED) && !defined(IL2CPP_STRUCT_Single_FWDDECL)
#include <Modloader/app/structs/Single.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Single.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
