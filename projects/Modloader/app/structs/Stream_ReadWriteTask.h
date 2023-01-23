#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Stream_ReadWriteTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Stream_ReadWriteTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stream_ReadWriteTask_DEFINED)
#include <Modloader/app/structs/Stream_ReadWriteTask__Fields.h>
#if defined(IL2CPP_STRUCT_Stream_ReadWriteTask__Fields_DEFINED)
#define IL2CPP_STRUCT_Stream_ReadWriteTask_DEFINED
struct Stream_ReadWriteTask__Class;
struct Stream_ReadWriteTask {
    struct Stream_ReadWriteTask__Class* klass;
    MonitorData* monitor;
    struct Stream_ReadWriteTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Stream_ReadWriteTask_FWDDECL)
#define IL2CPP_STRUCT_Stream_ReadWriteTask_FWDDECL
#include <Modloader/app/structs/Stream_ReadWriteTask__Class.h>
#endif
#undef IL2CPP_STRUCT_Stream_ReadWriteTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stream_ReadWriteTask_DEFINED) && !defined(IL2CPP_STRUCT_Stream_ReadWriteTask_FWDDECL)
#include <Modloader/app/structs/Stream_ReadWriteTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Stream_ReadWriteTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
