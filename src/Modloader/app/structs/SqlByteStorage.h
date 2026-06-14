#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlByteStorage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlByteStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlByteStorage_DEFINED)
#include <Modloader/app/structs/SqlByteStorage__Fields.h>
#if defined(IL2CPP_STRUCT_SqlByteStorage__Fields_DEFINED)
#define IL2CPP_STRUCT_SqlByteStorage_DEFINED
struct SqlByteStorage__Class;
struct SqlByteStorage {
    struct SqlByteStorage__Class* klass;
    MonitorData* monitor;
    struct SqlByteStorage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlByteStorage_FWDDECL)
#define IL2CPP_STRUCT_SqlByteStorage_FWDDECL
#include <Modloader/app/structs/SqlByteStorage__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlByteStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlByteStorage_DEFINED) && !defined(IL2CPP_STRUCT_SqlByteStorage_FWDDECL)
#include <Modloader/app/structs/SqlByteStorage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlByteStorage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
