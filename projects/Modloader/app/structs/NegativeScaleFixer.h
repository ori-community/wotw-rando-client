#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NegativeScaleFixer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NegativeScaleFixer_INITIALIZING
#if !defined(IL2CPP_STRUCT_NegativeScaleFixer_DEFINED)
#define IL2CPP_STRUCT_NegativeScaleFixer_DEFINED
struct NegativeScaleFixer__Class;
struct NegativeScaleFixer {
    struct NegativeScaleFixer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NegativeScaleFixer_FWDDECL)
#define IL2CPP_STRUCT_NegativeScaleFixer_FWDDECL
#include <Modloader/app/structs/NegativeScaleFixer__Class.h>
#endif
#undef IL2CPP_STRUCT_NegativeScaleFixer_INITIALIZING
#if !defined(IL2CPP_STRUCT_NegativeScaleFixer_DEFINED) && !defined(IL2CPP_STRUCT_NegativeScaleFixer_FWDDECL)
#include <Modloader/app/structs/NegativeScaleFixer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NegativeScaleFixer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
