#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrossContextChannel_ContextRestoreSink__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrossContextChannel_ContextRestoreSink__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossContextChannel_ContextRestoreSink__Fields_DEFINED)
#define IL2CPP_STRUCT_CrossContextChannel_ContextRestoreSink__Fields_DEFINED
struct IMessageSink;
struct Context;
struct IMessage;
struct __declspec(align(8)) CrossContextChannel_ContextRestoreSink__Fields {
    struct IMessageSink* _next;
    struct Context* _context;
    struct IMessage* _call;
};
#endif
#if !defined(IL2CPP_STRUCT_CrossContextChannel_ContextRestoreSink__Fields_FWDDECL)
#define IL2CPP_STRUCT_CrossContextChannel_ContextRestoreSink__Fields_FWDDECL
#include <Modloader/app/structs/Context.h>
#include <Modloader/app/structs/IMessage.h>
#include <Modloader/app/structs/IMessageSink.h>
#endif
#undef IL2CPP_STRUCT_CrossContextChannel_ContextRestoreSink__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossContextChannel_ContextRestoreSink__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CrossContextChannel_ContextRestoreSink__Fields_FWDDECL)
#include <Modloader/app/structs/CrossContextChannel_ContextRestoreSink__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrossContextChannel_ContextRestoreSink__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
