#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeakHashtable__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeakHashtable__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeakHashtable__StaticFields_DEFINED)
#define IL2CPP_STRUCT_WeakHashtable__StaticFields_DEFINED
struct IEqualityComparer;
struct WeakHashtable__StaticFields {
    struct IEqualityComparer* _comparer;
};
#endif
#if !defined(IL2CPP_STRUCT_WeakHashtable__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_WeakHashtable__StaticFields_FWDDECL
#include <Modloader/app/structs/IEqualityComparer.h>
#endif
#undef IL2CPP_STRUCT_WeakHashtable__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeakHashtable__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_WeakHashtable__StaticFields_FWDDECL)
#include <Modloader/app/structs/WeakHashtable__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeakHashtable__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
