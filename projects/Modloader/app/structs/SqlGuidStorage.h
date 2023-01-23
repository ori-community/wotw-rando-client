#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlGuidStorage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlGuidStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlGuidStorage_DEFINED)
#include <Modloader/app/structs/SqlGuidStorage__Fields.h>
#if defined(IL2CPP_STRUCT_SqlGuidStorage__Fields_DEFINED)
#define IL2CPP_STRUCT_SqlGuidStorage_DEFINED
struct SqlGuidStorage__Class;
struct SqlGuidStorage {
    struct SqlGuidStorage__Class* klass;
    MonitorData* monitor;
    struct SqlGuidStorage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlGuidStorage_FWDDECL)
#define IL2CPP_STRUCT_SqlGuidStorage_FWDDECL
#include <Modloader/app/structs/SqlGuidStorage__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlGuidStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlGuidStorage_DEFINED) && !defined(IL2CPP_STRUCT_SqlGuidStorage_FWDDECL)
#include <Modloader/app/structs/SqlGuidStorage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlGuidStorage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
