#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NPCMessageBoxModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NPCMessageBoxModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCMessageBoxModifier_DEFINED)
#include <Modloader/app/structs/NPCMessageBoxModifier__Fields.h>
#if defined(IL2CPP_STRUCT_NPCMessageBoxModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_NPCMessageBoxModifier_DEFINED
struct NPCMessageBoxModifier__Class;
struct NPCMessageBoxModifier {
    struct NPCMessageBoxModifier__Class* klass;
    MonitorData* monitor;
    struct NPCMessageBoxModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NPCMessageBoxModifier_FWDDECL)
#define IL2CPP_STRUCT_NPCMessageBoxModifier_FWDDECL
#include <Modloader/app/structs/NPCMessageBoxModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_NPCMessageBoxModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCMessageBoxModifier_DEFINED) && !defined(IL2CPP_STRUCT_NPCMessageBoxModifier_FWDDECL)
#include <Modloader/app/structs/NPCMessageBoxModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NPCMessageBoxModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
