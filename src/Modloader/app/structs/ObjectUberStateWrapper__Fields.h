#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectUberStateWrapper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectUberStateWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectUberStateWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectUberStateWrapper__Fields_DEFINED
struct IUberState;
struct IUberStateVisualizable;
struct __declspec(align(8)) ObjectUberStateWrapper__Fields {
    struct IUberState* m_state;
    struct IUberStateVisualizable* m_visualizable;
    bool m_isActive;
};
#endif
#if !defined(IL2CPP_STRUCT_ObjectUberStateWrapper__Fields_FWDDECL)
#define IL2CPP_STRUCT_ObjectUberStateWrapper__Fields_FWDDECL
#include <Modloader/app/structs/IUberState.h>
#include <Modloader/app/structs/IUberStateVisualizable.h>
#endif
#undef IL2CPP_STRUCT_ObjectUberStateWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectUberStateWrapper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ObjectUberStateWrapper__Fields_FWDDECL)
#include <Modloader/app/structs/ObjectUberStateWrapper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectUberStateWrapper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
