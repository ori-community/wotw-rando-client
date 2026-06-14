#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrossContextChannel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrossContextChannel_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossContextChannel_DEFINED)
#define IL2CPP_STRUCT_CrossContextChannel_DEFINED
struct CrossContextChannel__Class;
struct CrossContextChannel {
    struct CrossContextChannel__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CrossContextChannel_FWDDECL)
#define IL2CPP_STRUCT_CrossContextChannel_FWDDECL
#include <Modloader/app/structs/CrossContextChannel__Class.h>
#endif
#undef IL2CPP_STRUCT_CrossContextChannel_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossContextChannel_DEFINED) && !defined(IL2CPP_STRUCT_CrossContextChannel_FWDDECL)
#include <Modloader/app/structs/CrossContextChannel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrossContextChannel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
