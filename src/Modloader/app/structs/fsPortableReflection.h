#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsPortableReflection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsPortableReflection_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsPortableReflection_DEFINED)
#define IL2CPP_STRUCT_fsPortableReflection_DEFINED
struct fsPortableReflection__Class;
struct fsPortableReflection {
    struct fsPortableReflection__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_fsPortableReflection_FWDDECL)
#define IL2CPP_STRUCT_fsPortableReflection_FWDDECL
#include <Modloader/app/structs/fsPortableReflection__Class.h>
#endif
#undef IL2CPP_STRUCT_fsPortableReflection_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsPortableReflection_DEFINED) && !defined(IL2CPP_STRUCT_fsPortableReflection_FWDDECL)
#include <Modloader/app/structs/fsPortableReflection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsPortableReflection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
