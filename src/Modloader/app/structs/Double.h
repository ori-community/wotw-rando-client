#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Double_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Double_INITIALIZING
#if !defined(IL2CPP_STRUCT_Double_DEFINED)
#define IL2CPP_STRUCT_Double_DEFINED
struct Double {
    double m_value;
};
#endif
#if !defined(IL2CPP_STRUCT_Double_FWDDECL)
#define IL2CPP_STRUCT_Double_FWDDECL
#endif
#undef IL2CPP_STRUCT_Double_INITIALIZING
#if !defined(IL2CPP_STRUCT_Double_DEFINED) && !defined(IL2CPP_STRUCT_Double_FWDDECL)
#include <Modloader/app/structs/Double.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Double.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
