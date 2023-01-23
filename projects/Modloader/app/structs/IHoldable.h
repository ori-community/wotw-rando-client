#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IHoldable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IHoldable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IHoldable_DEFINED)
#define IL2CPP_STRUCT_IHoldable_DEFINED
struct IHoldable__Class;
struct IHoldable {
    struct IHoldable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IHoldable_FWDDECL)
#define IL2CPP_STRUCT_IHoldable_FWDDECL
#include <Modloader/app/structs/IHoldable__Class.h>
#endif
#undef IL2CPP_STRUCT_IHoldable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IHoldable_DEFINED) && !defined(IL2CPP_STRUCT_IHoldable_FWDDECL)
#include <Modloader/app/structs/IHoldable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IHoldable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
