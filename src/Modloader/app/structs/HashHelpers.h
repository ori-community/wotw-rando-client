#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HashHelpers_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HashHelpers_INITIALIZING
#if !defined(IL2CPP_STRUCT_HashHelpers_DEFINED)
#define IL2CPP_STRUCT_HashHelpers_DEFINED
struct HashHelpers__Class;
struct HashHelpers {
    struct HashHelpers__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_HashHelpers_FWDDECL)
#define IL2CPP_STRUCT_HashHelpers_FWDDECL
#include <Modloader/app/structs/HashHelpers__Class.h>
#endif
#undef IL2CPP_STRUCT_HashHelpers_INITIALIZING
#if !defined(IL2CPP_STRUCT_HashHelpers_DEFINED) && !defined(IL2CPP_STRUCT_HashHelpers_FWDDECL)
#include <Modloader/app/structs/HashHelpers.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HashHelpers.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
