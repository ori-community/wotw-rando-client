#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrossStitch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrossStitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossStitch_DEFINED)
#include <Modloader/app/structs/CrossStitch__Fields.h>
#if defined(IL2CPP_STRUCT_CrossStitch__Fields_DEFINED)
#define IL2CPP_STRUCT_CrossStitch_DEFINED
struct CrossStitch__Class;
struct CrossStitch {
    struct CrossStitch__Class* klass;
    MonitorData* monitor;
    struct CrossStitch__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrossStitch_FWDDECL)
#define IL2CPP_STRUCT_CrossStitch_FWDDECL
#include <Modloader/app/structs/CrossStitch__Class.h>
#endif
#undef IL2CPP_STRUCT_CrossStitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossStitch_DEFINED) && !defined(IL2CPP_STRUCT_CrossStitch_FWDDECL)
#include <Modloader/app/structs/CrossStitch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrossStitch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
