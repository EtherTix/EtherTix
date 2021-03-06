let component = ReasonReact.statelessComponent("WeiLabel");
let text = ReasonReact.string;

let make = (_children) => {
  /* spread the other default fields of component here and override a few */
  ...component,
  render: (_) => {
<div className="row">
  <div className="col-md">
    <div className="card container-card">
      <h5 className="card-header card-title">(text("About EtherTix"))</h5>
      <div className="card-body padding-vertical-less" style=(ReactDOMRe.Style.make(~margin="3%",()))> 
        <div className="row">
          (text("EtherTix is a decentralized ticketing platform"))
        </div>
        <div className="row text-muted" style=(ReactDOMRe.Style.make(~marginTop="10px",()))>
          (text("It allows anyone and everyone to create events by paying ETH to the network"))
        </div>
      </div>
    </div>
  </div>

  <div className="col-md">
    <div className="card container-card">
      <h5 className="card-header card-title">(text("For Organizers"))</h5>
      <div className="card-body padding-vertical-less" style=(ReactDOMRe.Style.make(~margin="3%",()))> 
        <div className="row">
          (text("Organizers get a platform where they pay to the network and get paid by users directly, without any intermediary"))
        </div>
        <div className="row text-muted" style=(ReactDOMRe.Style.make(~marginTop="10px",()))>
          (text("Organizers can issue tickets online and scan tickets at point-of-entry"))
        </div>
        <div className="row" style=(ReactDOMRe.Style.make(~marginTop="10px",()))>
          (text("Since everything is digitized on the blockchain, organizers automatically get paid if users resell tickets"))
        </div>
      </div>
    </div>
  </div>

  <div className="col-md">
    <div className="card container-card">
      <h5 className="card-header card-title">(text("For End Users"))</h5>
      <div className="card-body padding-vertical-less" style=(ReactDOMRe.Style.make(~margin="3%",()))> 
        <div className="row">
          (text("EtherTix provides a trusted platform where users can directly buy tickets from the organizers"))
        </div>
        <div className="row text-muted" style=(ReactDOMRe.Style.make(~marginTop="10px",()))>
          (text("Users have the ability to place tickets for resale"))
        </div>
        <div className="row" style=(ReactDOMRe.Style.make(~marginTop="10px",()))>
          (text("Since everything is digitized on the blockchain, users are guaranteed that resale tickets are genuine"))
        </div>
      </div>
    </div>
  </div>

  <div className="col-md">
    <div className="card container-card">
      <h5 className="card-header card-title">(text("Contact Us"))</h5>
      <div className="card-body padding-vertical-less" style=(ReactDOMRe.Style.make(~margin="3%",()))> 
        <div className="row text-muted">
          (text("If you would like more information, reach out at:"))
        </div>
        <a className="row" href="mailto:ethertix@gmail.com?subject=Using EtherTix&body=Hi, I would like to learn more about EtherTix">
          (text("ethertix@gmail.com"))
        </a>
      </div>
    </div>
  </div>


</div>
  },
};


