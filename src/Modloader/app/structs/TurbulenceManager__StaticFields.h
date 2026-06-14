#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurbulenceManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurbulenceManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurbulenceManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_TurbulenceManager__StaticFields_DEFINED
struct TurbulenceManager;
struct List_1_ITurbulenceInfluencer_;
struct TurbulenceManager__StaticFields {
    struct TurbulenceManager* Instance;
    struct List_1_ITurbulenceInfluencer_* s_influencers;
};
#endif
#if !defined(IL2CPP_STRUCT_TurbulenceManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_TurbulenceManager__StaticFields_FWDDECL
#include <Modloader/app/structs/List_1_ITurbulenceInfluencer_.h>
#include <Modloader/app/structs/TurbulenceManager.h>
#endif
#undef IL2CPP_STRUCT_TurbulenceManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurbulenceManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_TurbulenceManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/TurbulenceManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurbulenceManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
