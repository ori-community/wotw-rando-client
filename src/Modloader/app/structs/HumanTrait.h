#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HumanTrait_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HumanTrait_INITIALIZING
#if !defined(IL2CPP_STRUCT_HumanTrait_DEFINED)
#define IL2CPP_STRUCT_HumanTrait_DEFINED
struct HumanTrait__Class;
struct HumanTrait {
    struct HumanTrait__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_HumanTrait_FWDDECL)
#define IL2CPP_STRUCT_HumanTrait_FWDDECL
#include <Modloader/app/structs/HumanTrait__Class.h>
#endif
#undef IL2CPP_STRUCT_HumanTrait_INITIALIZING
#if !defined(IL2CPP_STRUCT_HumanTrait_DEFINED) && !defined(IL2CPP_STRUCT_HumanTrait_FWDDECL)
#include <Modloader/app/structs/HumanTrait.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HumanTrait.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
